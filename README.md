*This project has been created as part of the 42 curriculum by __adruz-to__*

# Pipex

**Pipex** is a project from the 42 curriculum that recreates the behavior of shell pipes (`|`) in C.  
It’s a simplified version of how a shell connects multiple commands so that the output of one becomes the input of another.

### Objective
The goal is to understand and implement Unix process management and file descriptors, focusing on:
- **`fork()`** to create child processes  
- **`pipe()`** to connect them  
- **`dup2()`** to redirect input/output  
- **`execve()`** to execute commands

### It should:
- Open the input and output files.
- Create a pipe to connect `cmd1` and `cmd2`.
- Execute both commands in separate processes.
- Handle all necessary redirections and clean up resources.

### Key concepts
- Process creation and synchronization
- File descriptor management
- Redirections (`<`, `>`) and pipes (`|`)
- Error handling and memory management

### Program behavior
Your program must mimic this shell command:
```bash
< infile cmd1 | cmd2 > outfile
```

- infile: input file for cmd1
- cmd1: first command
- cmd2: second command
- outfile: output file to store the result

Example:
```bash
$ ./pipex infile "grep hello" "wc -l" outfile
```

This should behave exactly like:
```bash
$ < infile grep hello | wc -l > outfile
```
### Implementation hints
- Use pipe() to create a communication channel between processes.
- Use fork() to create separate processes for cmd1 and cmd2.
- Use dup2() to redirect standard input/output.
- Use execve() to execute each command with its arguments.
- Close unused file descriptors in each process to avoid leaks.
- Always check for errors in system calls.

---

### License

This project is part of the 42 School curriculum. Feel free to reference but please don't copy directly for your own 42 projects.

---
