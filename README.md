# Base C++ Project

Base project with default config for cmake, including basic logging system.

## Requirements

- [Boost 1.58.0](https://www.boost.org/users/history/version_1_58_0.html) or later.
- C++17 compiler.

## Building for Linux

- Install cmake.
- Open terminal in project root directory:
```
mkdir build && cd build
cmake ..
make
```

- Open terminal in project root directory:
```
mkdir build && cd build
cmake ..
make
```

## Running

- Start **server** to accept files:
```
server <port> <outDirectory>
```
- Start **client** to transfer file `<transferFilePath>`:
```
client <serverAddress> <serverPort> <transferFilePath>
```
- Transferred file will be at `<outDirectory>`.
