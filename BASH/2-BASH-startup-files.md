# Bash startup files in chronological order

When a user connects remotely to a Unix-like system, thses files are executed in sequence.

| Files and Components                       | Explanation                                                                       |
|-------------------------------------------|-----------------------------------------------------------------------------------|
| **Before Login**                          |                                                                                   |
| `/etc/ssh/sshd_config`                    | Configuration file for the SSH server, determines server behavior and settings. |
| `/etc/issue.net` (if configured)          | Optional SSH banner displayed to users before the login prompt.                   |
| `/etc/issue` (if configured)              | Another optional SSH banner displayed before the login prompt.                    |
| SSH Banner (if configured in sshd_config) | Custom banner displaying messages, warnings, or notices before login.            |
| **After Login**                           |                                                                                   |
| Authentication (e.g., Password or Key)    | User enters credentials (password or SSH key) after seeing the SSH banner.       |
| PAM (Pluggable Authentication Modules)    | Provides additional authentication checks and policies.                            |
| `/etc/login.defs` (if applicable)         | Contains system-wide login definitions affecting user accounts.                   |
| `/etc/profile`                            | System-wide shell initialization file executed after login.                       |
| `~/.bash_profile` (if applicable)         | User-specific initialization file executed after login.                            |
| `~/.bashrc` (if applicable)               | User-specific initialization file executed for non-login interactive shells.     |
| `/etc/motd`                               | Message of the Day (MOTD) displayed after a successful login, often contains system-wide messages or updates. |
| `/etc/logout`                             | This file, if it exists, can contain commands or scripts to execute when a user logs out. |

## Invoked as an interactive login shell, or with `--login'

- **Interactive** means you can enter commands.
- A **login shell** means that you got the shell after authenticating to the system, usually by giving your user name and password.

Files read:

***`/etc/profile`***

***`~/.bash_profile, ~/.bash_login or ~/.profile`*** first existing readable file is read

***`~/.bash_logout`*** upon logout.

- Error messages are printed if configuration files exist but are not readable. 
- If a file does not exist, bash searches for the next.

## Invoked as an interactive non-login shell

- A **non-login** shell means that you did not have to authenticate to the system.
- For instance, when you open a terminal using an icon, or a menu item, that is a non-login shell.

Files read:

***`~/.bashrc`***

This file is usually referred to in ~/.bash_profile:

`if [ -f ~/.bashrc ]; then . ~/.bashrc; fi`

## Invoked non-interactively

- All **scripts** use non-interactive shells.
- They are programmed to do certain tasks and cannot be instructed to do other jobs than those for which they are programmed.

Files read:

defined by BASH_ENV

PATH is not used to search for this file, so if you want to use it, best refer to it by giving the full path and file name.
