# Advanced Keyboard Tricks

The following table lists the keys used to move the cursor:  

## Cursor Movement Commands in Bash

## Basic Cursor Movements

| Command    | Description                                  |
|------------|----------------------------------------------|
| `Ctrl + A` | Move the cursor to the beginning of the line |
| `Ctrl + E` | Move the cursor to the end of the line       |
| `Ctrl + F` | Move the cursor forward one character        |
| `Ctrl + B` | Move the cursor backward one character       |

## Word-Based Movements

| Command    | Description                                  |
|------------|----------------------------------------------|
| `Alt + F`  | Move the cursor forward one word             |
| `Alt + B`  | Move the cursor backward one word            |

## Command History Navigation

| Command    | Description                                  |
|------------|----------------------------------------------|
| `Ctrl + P` | Move to the previous command in history      |
| `Ctrl + N` | Move to the next command in history          |

## Deletion Commands

| Command    | Description                                                     |
|------------|-----------------------------------------------------------------|
| `Ctrl + U` | Delete from the cursor to the beginning of the line             |
| `Ctrl + K` | Delete from the cursor to the end of the line                   |
| `Ctrl + W` | Delete the word before the cursor                               |
| `Alt + D`  | Delete the word after the cursor                                |

## Screen and Line Management

| Command    | Description                                  |
|------------|----------------------------------------------|
| `Ctrl + L` | Clear the screen (similar to `clear` command)|
| `Ctrl + XX`| Toggle between the start of the line and the current cursor position |

## Transposition Commands

| Command    | Description                                                                 |
|------------|-----------------------------------------------------------------------------|
| `Ctrl + T` | Transpose the character before the cursor with the character under the cursor|
| `Alt + T`  | Transpose the word before the cursor with the word under the cursor         |

## Using History commands

| Command    | Action                                                                                  |
|------------|-----------------------------------------------------------------------------------------|
| `Ctrl + P` | Move to the previous history entry. This is the same action as the up arrow.            |
| `Ctrl + N` | Move to the next history entry. This is the same action as the down arrow.              |
| `Alt + <`  | Move to the beginning (top) of the history list.                                        |
| `Alt + >`  | Move to the end (bottom) of the history list, i.e., the current command line.           |
| `Ctrl + R` | Reverse incremental search. This searches incrementally from the current command line up the history list. |
| `Alt + P`  | Reverse search, nonincremental. With this key, type in the search string and press enter before the search is performed. |
| `Alt + N`  | Move to the next match after performing a reverse search with `Alt + P`.                |
| `Ctrl + O` | Execute the current item in the history list and advance to the next.                   |
