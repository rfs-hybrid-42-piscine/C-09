# 🟢 Exercise 01: Makefile

## 📝 Objective
Create a `Makefile` that fully automates the compilation of `libft.a`, pulling source files from a `srcs/` directory and headers from an `includes/` directory.

## 💡 The Logic

A Makefile prevents you from having to type out massive compilation commands manually. It tracks file timestamps and only recompiles files that have been updated.
1. **Variables:** We define variables (`NAME`, `CC`, `CFLAGS`, `RM`) at the top so we can easily change the compiler or flags globally. 
2. **Path Mapping:** The project is structured. We map the `SRC` variable to specific files inside the `srcs/` directory, and use `-Iincludes` to tell the compiler where to find `ft.h`.
3. **Pattern Rules (`%.o: %.c`):** This rule dynamically tells the compiler how to convert any `.c` file it finds into a `.o` object file.
4. **Build Targets:** We define explicit rules required by the subject:
   - `all`: Triggers the compilation of `libft.a`.
   - `clean`: Removes only the generated `.o` files.
   - `fclean`: Runs `clean` and also removes the `libft.a` archive.
   - `re`: Runs `fclean` followed by `all` to force a complete rebuild.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the Makefile here:* **[`Makefile`](Makefile)**

2. **Testing Environment Setup:**
   Because a Makefile is an automation script, it will fail if the files it expects do not exist! Before testing, you must simulate the project structure by copying the `.c` files from `ex00` and creating a dummy `ft.h` header.
   ```bash
   cd ex01
   mkdir -p srcs includes
   cp ../ex00/*.c srcs/
   touch includes/ft.h
   ```

3. **Running the Tests:**
   Now that the environment is set up, test your `make` rules one by one to ensure the paths and variables resolve perfectly.
   ```bash
   make        # Should compile .o files inside srcs/ and build libft.a
   ls -la      # Verify libft.a exists!
   make clean  # Should delete all .o files from srcs/
   make fclean # Should delete libft.a
   make re     # Should rebuild everything from scratch
   ```
