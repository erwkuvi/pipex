# pipex

This project aims to deepen your understanding of the two concepts that you already know: Redirections and Pipes. It is an introductory project for the bigger UNIX projects that will appear later on in the cursus of the 42 schools..

## Project Objectives

> \< infile cmd1 | cmd2 > outfile


The program should be executed as:

> ./pipex infile cmd1 cmd2 outfile

- Reads input from infile
- Executes cmd1, sends its output to cmd2
- Writes the final output of cmd2 to outfile
- Uses pipes (|) to redirect the output of cmd1 to the input of cmd2
- Must work the same way as running the command in Bash


## Key Concepts & Challenges

### Processes & Forking (fork())

- The program must create child processes for each command.
- The parent process manages file descriptors and waits for children to finish.

### Pipes (pipe())

- A pipe is used to pass data between processes.
- The output (stdout) of cmd1 is redirected into the input (stdin) of cmd2.

### File Redirection (dup2())

- dup2() is used to replace standard input/output with files or pipes.
- infile is redirected to cmd1's input.
- outfile is redirected from cmd2's output.

### Executing Commands (execve())

- The program must use execve() to run cmd1 and cmd2.
- Commands must be located using environment variables (PATH).

### Error Handling
- Handle cases where files don’t exist or permissions are denied.
- Check if commands are invalid or not found.

  
