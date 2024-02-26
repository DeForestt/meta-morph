# MetaMorph

MetaMorph is a simple, header-only C++ library designed to facilitate the use of decorators in C++17 and later. It allows for elegant modification of function behavior, making it easier to add functionality like logging, performance measurement, and more, without altering the original function code.

## Features

- **Header-Only**: Easy to include in any C++ project without the need to compile or link additional sources.
- **C++17 Support**: Utilizes modern C++ features for a clean and efficient implementation.
- **Simple Syntax**: Introduces macros to simplify the decoration of functions.

## Getting Started

### Prerequisites

- C++17 compatible compiler
- CMake 3.14 or later (if using CMake to integrate the library)

### Installation

#### Manual Installation

1. Clone the repository or download the latest release.
2. Copy the `include/MetaMorph.hpp` file into your project's include path.

#### Using CMake

1. Add MetaMorph as a submodule to your project:
   ```bash
   git submodule add https://github.com/DeForestt/meta-morph.git external/meta-morph
   git submodule update --init --recursive
   ```
2. Include MetaMorph in your CMakeLists.txt:
  ```cmake
  add_subdirectory(external/meta-morph)
  target_link_libraries(YourTargetName PRIVATE MetaMorph)
  ```

### USAGE
To use MetaMorph in your project, include the MetaMorph.hpp header in your C++ files:
```c++
#include "MetaMorph.hpp"
```

Define a decorator using the DECORATOR and END_DECORATOR macros:\
```c++
DECORATOR(myDecorator) {
    // Pre-function logic
    auto result = SUBJ(); // Call the original function
    // Post-function logic
    return result;
} END_DECORATOR
```

Decorate your functions using the DECORATE and END_DECORATE macros:
```c++
DECORATE(myDecorator, decoratedFunction, int a, int b) {
    return a + b;
} END_DECORATE
```

