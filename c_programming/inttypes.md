# inttypes.h

## First three characters
PRI for output format (printf, fwprintf, wprintf, etc.)
SCN for input format (scanf, fwscanf, etc.)

## Fourth character
d for decimal formatting
x for hexadecimal formatting
o for octal formatting
u for unsigned int formatting
i for integer formatting

## Remaining Characters
N for N bit size assignment to the data type (Eg. 32 for 32-bit size for integer, 16 for 16-bit size for unsigned int and so on)
PTR for pointer
MAX for maximum supported bit size
FAST, whose meaning is not clearly defined and is left to the implementation to decide what is meant by a "fast" integer data type.

### Printing Macros

| Type                | Decimal     | Integer      | Unsigned    | Octal       | Hexadecimal (lowercase) | Hexadecimal (uppercase) |
|---------------------|-------------|--------------|-------------|-------------|-------------------------|-------------------------|
| `int8_t`            | `PRId8`     | `PRIi8`      |             |             | `PRIx8`                 | `PRIX8`                 |
| `int16_t`           | `PRId16`    | `PRIi16`     |             |             | `PRIx16`                | `PRIX16`                |
| `int32_t`           | `PRId32`    | `PRIi32`     |             |             | `PRIx32`                | `PRIX32`                |
| `int64_t`           | `PRId64`    | `PRIi64`     |             |             | `PRIx64`                | `PRIX64`                |
| `uint8_t`           |             |              | `PRIu8`     | `PRIo8`     | `PRIx8`                 | `PRIX8`                 |
| `uint16_t`          |             |              | `PRIu16`    | `PRIo16`    | `PRIx16`                | `PRIX16`                |
| `uint32_t`          |             |              | `PRIu32`    | `PRIo32`    | `PRIx32`                | `PRIX32`                |
| `uint64_t`          |             |              | `PRIu64`    | `PRIo64`    | `PRIx64`                | `PRIX64`                |
| `int_least8_t`      | `PRIdLEAST8`| `PRIiLEAST8` |             |             | `PRIxLEAST8`            | `PRIXLEAST8`            |
| `int_least16_t`     | `PRIdLEAST16`| `PRIiLEAST16`|             |             | `PRIxLEAST16`           | `PRIXLEAST16`           |
| `int_least32_t`     | `PRIdLEAST32`| `PRIiLEAST32`|             |             | `PRIxLEAST32`           | `PRIXLEAST32`           |
| `int_least64_t`     | `PRIdLEAST64`| `PRIiLEAST64`|             |             | `PRIxLEAST64`           | `PRIXLEAST64`           |
| `uint_least8_t`     |             |              | `PRIuLEAST8`| `PRIoLEAST8`| `PRIxLEAST8`            | `PRIXLEAST8`            |
| `uint_least16_t`    |             |              | `PRIuLEAST16`| `PRIoLEAST16`| `PRIxLEAST16`          | `PRIXLEAST16`           |
| `uint_least32_t`    |             |              | `PRIuLEAST32`| `PRIoLEAST32`| `PRIxLEAST32`          | `PRIXLEAST32`           |
| `uint_least64_t`    |             |              | `PRIuLEAST64`| `PRIoLEAST64`| `PRIxLEAST64`          | `PRIXLEAST64`           |
| `int_fast8_t`       | `PRIdFAST8` | `PRIiFAST8`  |             |             | `PRIxFAST8`             | `PRIXFAST8`             |
| `int_fast16_t`      | `PRIdFAST16`| `PRIiFAST16` |             |             | `PRIxFAST16`            | `PRIXFAST16`            |
| `int_fast32_t`      | `PRIdFAST32`| `PRIiFAST32` |             |             | `PRIxFAST32`            | `PRIXFAST32`            |
| `int_fast64_t`      | `PRIdFAST64`| `PRIiFAST64` |             |             | `PRIxFAST64`            | `PRIXFAST64`            |
| `uint_fast8_t`      |             |              | `PRIuFAST8` | `PRIoFAST8` | `PRIxFAST8`             | `PRIXFAST8`             |
| `uint_fast16_t`     |             |              | `PRIuFAST16`| `PRIoFAST16`| `PRIxFAST16`            | `PRIXFAST16`            |
| `uint_fast32_t`     |             |              | `PRIuFAST32`| `PRIoFAST32`| `PRIxFAST32`            | `PRIXFAST32`            |
| `uint_fast64_t`     |             |              | `PRIuFAST64`| `PRIoFAST64`| `PRIxFAST64`            | `PRIXFAST64`            |
| `intptr_t`          | `PRIdPTR`   | `PRIiPTR`    | `PRIuPTR`   | `PRIoPTR`   | `PRIxPTR`               | `PRIXPTR`               |
| `uintptr_t`         |             |              | `PRIuPTR`   | `PRIoPTR`   | `PRIxPTR`               | `PRIXPTR`               |
| `intmax_t`          | `PRIdMAX`   | `PRIiMAX`    |             |             | `PRIxMAX`               | `PRIXMAX`               |
| `uintmax_t`         |             |              | `PRIuMAX`   | `PRIoMAX`   | `PRIxMAX`               | `PRIXMAX`               |

### Scanning Macros

| Type                | Decimal     | Integer      | Unsigned    | Octal       | Hexadecimal |
|---------------------|-------------|--------------|-------------|-------------|-------------|
| `int8_t`            | `SCNd8`     | `SCNi8`      |             |             | `SCNx8`     |
| `int16_t`           | `SCNd16`    | `SCNi16`     |             |             | `SCNx16`    |
| `int32_t`           | `SCNd32`    | `SCNi32`     |             |             | `SCNx32`    |
| `int64_t`           | `SCNd64`    | `SCNi64`     |             |             | `SCNx64`    |
| `uint8_t`           |             |              | `SCNu8`     | `SCNo8`     | `SCNx8`     |
| `uint16_t`          |             |              | `SCNu16`    | `SCNo16`    | `SCNx16`    |
| `uint32_t`          |             |              | `SCNu32`    | `SCNo32`    | `SCNx32`    |
| `uint64_t`          |             |              | `SCNu64`    | `SCNo64`    | `SCNx64`    |
| `int_least8_t`      | `SCNdLEAST8`| `SCNiLEAST8` |             |             | `SCNxLEAST8`|
| `int_least16_t`     | `SCNdLEAST16`| `SCNiLEAST16`|             |             | `SCNxLEAST16`|
| `int_least32_t`     | `SCNdLEAST32`| `SCNiLEAST32`|             |             | `SCNxLEAST32`|
| `int_least64_t`     | `SCNdLEAST64`| `SCNiLEAST64`|             |             | `SCNxLEAST64`|
| `uint_least8_t`     |             |              | `SCNuLEAST8`| `SCNoLEAST8`| `SCNxLEAST8`|
| `uint_least16_t`    |             |              | `SCNuLEAST16`| `SCNoLEAST16`| `SCNxLEAST16`|
| `uint_least32_t`    |             |              | `SCNuLEAST32`| `SCNoLEAST32`| `SCNxLEAST32`|
| `uint_least64_t`    |             |              | `SCNuLEAST64`| `SCNoLEAST64`| `SCNxLEAST64`|
| `int_fast8_t`       | `SCNdFAST8` | `SCNiFAST8`  |             |             | `SCNxFAST8` |
| `int_fast16_t`      | `SCNdFAST16`| `SCNiFAST16` |             |             | `SCNxFAST16`|
| `int_fast32_t`      | `SCNdFAST32`| `SCNiFAST32` |             |             | `SCNxFAST32`|
| `int_fast64_t`      | `SCNdFAST64`| `SCNiFAST64` |             |             | `SCNxFAST64`|
| `uint_fast8_t`
