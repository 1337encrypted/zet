//Use on one core for demo purposes
#if CONFIG_FREERTOS_UNICORE
static const BaseType_t app_cpu = 0;
#else
static const BaseType_t app_cpu = 1;
#endif

//Define pins
//Define pins
constexpr uint8_t ledPin1 = 2;
constexpr uint8_t ledPin2 = 13;

// Our task: blink an LED

void task1(void *parameter)
{
  while(1)
  {
    digitalWrite(ledPin1, HIGH);
    vTaskDelay(500/ portTICK_PERIOD_MS);
    digitalWrite(ledPin1, LOW);
    vTaskDelay(500/ portTICK_PERIOD_MS);
    Serial.println("Task 1");
  }
}

void task2(void *parameter)
{
  while(1)
  {
    digitalWrite(ledPin2, HIGH);
    vTaskDelay(100/ portTICK_PERIOD_MS);
    digitalWrite(ledPin2, LOW);
    vTaskDelay(100/ portTICK_PERIOD_MS);
    Serial.println("Task 2");
  }
}

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  
  //setting up the task to run
  xTaskCreatePinnedToCore(    // Use cTask in vainlla FreeRTOS
              task1,          // Funtion to be called
              "Toggle task1", // Name of the task
              1024,           // Stack size (bytes in ESP32)
              NULL,           // Parameter to pass to function
              1,              // Task priority (0 to configMAX_PRIORITIES - 1)
              NULL,           // Task handle
              app_cpu);       // Run this task using app_cpu core, not present on xTaskCreate function in vanilla freeRTOS
  
  xTaskCreatePinnedToCore(task2,"Toggle task2",1024,NULL,1,NULL,app_cpu);       // Run this task using app_cpu core, not present on xTaskCreate function in vanilla freeRTOS
  
  // If this was vanilla freeRTOS you want to call vTaskScheduler() in 
  // main after you setup your tasks.
}

void loop() {}
