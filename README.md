# C Course

A comprehensive workspace for learning C programming—from fundamental language concepts to project organization with header files and modern CMake builds.

## 📁 Repository Structure

```text
C-course/
├── CMakeLists.txt          # Global build configuration
├── build/                  # Build directory (generated during compilation)
└── src/                    # C source files
    ├── lib/                # Header files (.h)
    ├── hello.c             # Main entry point
    ├── arit_ops.c          # Arithmetic operations module implementation
    ├── inc_n_dec.c         # Increment and decrement module implementation
    ├── ascii_ops.c         # ASCII value implicit conversion implementation
    ├── booleans.c          # Prints boolean values
    └── assign_ops.c        # Assignment operators module implementation
```
🛠️ Prerequisites
Make sure you have the following tools installed on your system:

C Compiler: gcc (GCC 11 or newer recommended) or clang

Build System Generator: CMake (v3.10+)

Build Automation: make / gmake or ninja

🚀 Building and Running
This project uses CMake to generate native build files and decouple binary outputs from the source code.

1. Configure the Project
Create a build directory and run CMake to generate the build files:

```Bash
mkdir build
cd build
cmake ..
```
2. Compile the Project
Build the executable using CMake's build tool wrapper:

```Bash
cmake --build .
```
3. Run the Executable
After a successful build, launch the generated program:

```Bash
# On Linux/macOS
./program

# On Windows
.\program.exe
```

💻 Manual Compilation (Alternative)
If you prefer to compile directly using gcc without CMake, run the following command from the root directory:

```Bash
gcc -I src/lib src/*.c -o programa
```
-I src/lib: Includes the lib directory so headers (.h) can be included without specifying full subpaths.

⚙️ Configuration & C Standard
C Standard: The project defaults to C11 (configured in CMakeLists.txt).

Header Inclusions: All header files located under src/lib/ can be included across your C source files using #include "your_header.h".

📝 License
This repository is created for educational purposes. Feel free to use and modify the code as needed.
