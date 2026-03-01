*This project has been created as part of the 42 curriculum by maaugust.*

<div align="center">
  <img src="https://raw.githubusercontent.com/rfs-hybrid/42-piscine-artwork/main/assets/covers/cover-c09.png" alt="C 09 Cover" width="100%" />
</div>

<div align="center">
  <h1>💻 C 09: Makefiles & Static Libraries</h1>
  <p><i>Automating the build process, packaging archives, and compiling large projects.</i></p>
  
  <img src="https://img.shields.io/badge/Language-C-blue" alt="Language badge" />
  <img src="https://img.shields.io/badge/Grade-100%2F100-success" alt="Grade badge" />
  <img src="https://img.shields.io/badge/Norminette-Passing-success" alt="Norminette badge" />
</div>

---

## 💡 Description
**C 09** introduces the standard tools used by C developers to manage and compile large-scale software projects. 

Instead of typing out massive `cc` commands every time you want to test your code, you will learn how to write a `Makefile` to automate the compilation of your source code into object files (`.o`), and then package them into a reusable Static Library archive (`.a`). You will also implement another string splitting algorithm to solidify your grasp on dynamic memory allocation.

---

## 🧠 Exercise Breakdown & Logic

*The following section explains the core concepts required to solve each exercise. It focuses on the fundamental logic of C programming, emphasizing build automation and memory management.*

### 🔹 Libraries & Build Automation


| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex00: libft_creator.sh`](ex00)** | **Static Libraries:** Creating a library archive (`libft.a`) using a shell script. <br><br>**Logic:** A static library is essentially a zip file of compiled object (`.o`) files. The script must first compile the requested `.c` files (`ft_putchar.c`, `ft_swap.c`, `ft_putstr.c`, `ft_strlen.c`, `ft_strcmp.c`) into `.o` files using `cc -c`. Then, it uses the `ar rcs` command to bundle them into `libft.a` and automatically index the archive (via the `s` flag). Finally, it cleans up by using `rm -f` to forcibly remove the leftover `.o` files. |
| **[`ex01: Makefile`](ex01)** | **Makefiles:** Automating the compilation process to build `libft.a` dynamically from a specific folder structure. <br><br>**Logic:** A `Makefile` consists of rules and dependencies. We use variables (like `SRCS`, `OBJS`, `CC`, `CFLAGS`) to keep the file clean. We define an `all` rule that points to `libft.a`. The compiler must fetch `.c` files from a `srcs/` directory and map them to `.o` files, using the header `ft.h` located in the `includes/` directory. We also build utility rules: `clean` (removes `.o` files), `fclean` (removes `.o` files AND the `.a` library), and `re` (runs `fclean` then `all`). |

### 🔢 Advanced String Manipulation

| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex02: ft_split`](ex02)** | **Parsing:** Splitting a string into a null-terminated array of substrings based on a set of separator characters. <br><br>**Logic:** Similar to C 07, but acts as a final test of your Heap memory manipulation. We count the words, `malloc` the parent array of pointers, then iterate through the string to measure, allocate, and copy each individual word, ensuring no empty strings are included. We cap the final array index with `NULL`. |

---

## 🛠️ Instructions

### 🧪 Compilation & Testing
Because **C 09** focuses heavily on compilation tools, testing it requires interacting with Bash scripts and `make` commands.

1. **Clone the repository:**
   You can clone this module directly, or pull the entire 42 Piscine parent repository which includes this module as a submodule.

   **Option A: Clone this module directly**
   ```bash
   git clone git@github.com:rfs-hybrid-42-piscine/C-09.git C-09
   cd C-09
   ```

   **Option B: Clone the parent repository (with submodules)**
   ```bash
   git clone --recurse-submodules git@github.com:rfs-hybrid/42-Piscine.git 42-Piscine
   cd 42-Piscine/C-09
   ```
   *(Note: The `--recurse-submodules` flag ensures all nested module repositories are populated immediately.)*

2. **Test Exercise 00 (libft_creator):**
   Run the shell script to verify it generates the library and cleans up the `.o` files.
   ```bash
   cd ex00
   sh libft_creator.sh
   ls -la # You should see libft.a
   ```

3. **Test Exercise 01 (Makefile):**
   Because a Makefile is an automation script, it will fail if the files it expects do not exist! Before testing, simulate the project structure by copying the `.c` files from `ex00` and creating a dummy `ft.h` header.
   ```bash
   cd ex01
   mkdir -p srcs includes
   cp ../ex00/*.c srcs/
   touch includes/ft.h
   make        # Builds libft.a
   make clean  # Removes .o files
   make fclean # Removes .o files and libft.a
   make re     # Rebuilds everything from scratch
   ```

4. **Test Exercise 02 (ft_split):**
   Use a custom **[`tester.c`](tester.c)** containing a `main` function to compile and test your split logic.
   ```bash
   cc -Wall -Wextra -Werror tester.c ex02/ft_split.c -o test_split
   ./test_split
   ```

### 🚨 The Norm
Moulinette relies on a program called `norminette` to check if your files comply with the Norm. Every single `.c` and `.h` file must pass. 

**The 42 Header:**
Before writing any code, every file must start with the standard 42 header. `norminette` will automatically fail any file missing this specific signature.
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:10:47 by maaugust          #+#    #+#             */
/*   Updated: 2025/03/12 19:14:51 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

Run the following command before pushing:
```bash
norminette -R CheckForbiddenSourceHeader <file.c>
```

---

## 📚 Resources & References

* `man ar` - Manual for creating and modifying archives.
* `man make` - Manual for GNU make utility.
* [Makefile Tutorial by Example](https://makefiletutorial.com/) - A fantastic breakdown of variables, targets, and rules.
* [42 Norm V4](https://cdn.intra.42.fr/pdf/pdf/96987/en.norm.pdf) - The strict coding standard for 42 C projects.

### 🤖 AI Usage Guidelines
* **Code:** No AI-generated code was used to solve these exercises. All C functions, scripts, and Makefiles were built manually to strictly comply with the 42 Norm and deeply understand manual memory manipulation, enforcing the concept that learning is about developing the ability to find an answer, not just getting one directly.
* **Documentation:** AI tools were utilized to structure this `README.md` and format the logic breakdowns to create a clean, accessible educational resource for fellow 42 students.
