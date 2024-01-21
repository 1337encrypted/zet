# FreeRTOS

## Defining a core

```
#if CONFIG_FREERTOS_UNICORE
static const BaseType_t app_cpu = 0;
#else
static const BaseType_t app_cpu = 1;
#endif
```

The above code selects 1 core for scheduling the tasks.

## Creating a task

```
void task1(void *parameter)
{
  while(1)
  {
    Serial.println("Task 1");
  }
}
```

- Every freeRTOS task takes atleast one parameter and returns no parameters.
- Inside each task an infinite loop has to be setup.

## Setting up the task

- The xTaskCreatePinedToCore function is used to setup a task.
- This should be done inside the setup function.

```
xTaskCreatePinnedToCore(    // Use cTask in vainlla FreeRTOS
              task1,          // Funtion to be called
              "Toggle task1", // Name of the task
              1024,           // Stack size (bytes in ESP32)
              NULL,           // Parameter to pass to function
              1,              // Task priority (0 to configMAX_PRIORITIES - 1)
              NULL,           // Task handle
              app_cpu);       // Run this task using app_cpu core, not present on xTaskCreate function in vanilla freeRTOS
```



