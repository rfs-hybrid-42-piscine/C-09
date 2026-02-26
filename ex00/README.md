# 🟢 Exercise 00: libft_creator.sh

## 📝 Objective
Write a shell script that compiles a specific set of standard C functions and packages them into a static library archive named `libft.a`.

## 💡 The Logic
A static library (`.a`) is essentially a zip file containing compiled object files (`.o`), allowing other programs to link and use your functions without needing the original `.c` source code.
1. **Compilation:** The script first uses the `cc -c` command (along with the strict 42 flags) to compile **[`ft_putchar.c`](ft_putchar.c)**, **[`ft_putstr.c`](ft_putstr.c)**, **[`ft_strcmp.c`](ft_strcmp.c)**, **[`ft_strlen.c`](ft_strlen.c)**, and **[`ft_swap.c`](ft_swap.c)** into their respective `.o` object files.
2. **Archiving:** We use the `ar rcs` command to create the archive. `r` replaces/inserts the files, `c` creates the archive if it doesn't exist, and `s` builds an index for faster linking.
3. **Cleanup:** Once the `.a` file is safely created, the script uses `rm -f` to forcibly delete the leftover `.o` files, keeping the directory perfectly clean.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source script here:* **[`libft_creator.sh`](libft_creator.sh)**

2. **Testing:**
   Run the script directly in your terminal, then check if the library was generated successfully.
   ```bash
   sh libft_creator.sh
   ls -la | grep libft.a
   ```
