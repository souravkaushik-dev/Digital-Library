# 📚 Sourav Kaushik's Digital Library

**Version:** 1.0  
**Author:** Sourav Kaushik

---

## 🚀 Project Overview

**Sourav Kaushik's Digital Library** is an interactive command-line application built in C that serves as a personal, digital showcase of my portfolio, bio, projects, and contact information. The app offers an intuitive, user-friendly interface where users can explore my professional journey, key projects, and get redirected to my full portfolio website, all from the command line.

---

## 💡 Key Features

- **About Me Section**: Get an overview of my bio and professional background.
- **Portfolio**: Easy URL redirection to my full portfolio website.
- **Contact Info**: Quick access to my contact numbers.
- **Projects Section**: Brief descriptions of the key projects I’m working on.
- **Interactive Commands**: Type specific commands to retrieve the desired information.
- **Cross-Platform URL Redirection**: Works seamlessly on Windows, macOS, and Linux for opening the portfolio website in a browser.

---

## 📋 Getting Started

### 🔧 Prerequisites

- A working C compiler (such as GCC or Clang).
- Access to a terminal or command-line interface.

### 🛠️ Installation Steps

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/digital-library.git
   ```

2. **Navigate to the project directory**:
   ```bash
   cd digital-library
   ```

3. **Compile the program**:
   ```bash
   gcc main.c -o digital-library
   ```

4. **Run the program**:
   ```bash
   ./digital-library
   ```

---

## 🖥️ How It Works

### Available Commands:

- `about`: Displays my bio and professional background.
- `portfolio`: Opens my full portfolio website in your default browser.
- `phone`: Lists my contact numbers.
- `projects`: Shows key projects I’m working on, with brief descriptions.
- `help`: Lists all available commands.
- `exit`: Exits the application.

---

## 📂 Functions & Code Overview

1. **`display_about()`**  
   - **Purpose**: Shows a detailed bio and professional background.
   - **Usage**: Triggered when the user types `about`.

2. **`open_portfolio()`**  
   - **Purpose**: Opens my portfolio website.
   - **Platform Compatibility**: Uses system-specific commands (`start`, `open`, `xdg-open`).
   - **Usage**: Triggered when the user types `portfolio`.

3. **`display_contact_info()`**  
   - **Purpose**: Displays my contact numbers.
   - **Usage**: Triggered when the user types `phone`.

4. **`list_projects()`**  
   - **Purpose**: Shows a list of my key projects and their descriptions.
   - **Usage**: Triggered when the user types `projects`.

5. **`help_menu()`**  
   - **Purpose**: Lists all available commands.
   - **Usage**: Triggered when the user types `help`.

6. **`exit_program()`**  
   - **Purpose**: Safely exits the application.
   - **Usage**: Triggered when the user types `exit`.

---

## 🗂️ File Structure

- `main.c`: Contains the program logic, including command handling and function definitions.
- `README.md`: This document that explains how to use the app.

---

## 📌 Variable Overview

- **Text Variables**:
  - `about_text`: Stores my bio and professional background.
  - `url`: The URL for my portfolio website.
  - `contacts[]`: Stores my contact numbers.
  - `projects[]`: Names of my key projects.
  - `project_descriptions[]`: Brief descriptions of each project.

- **Command Variables**:
  - `commands[]`: Stores the list of valid commands (`about`, `portfolio`, `phone`, `projects`, etc.).

---

## 🧑‍💻 Example Commands

1. **About Me**:  
   Type `about` to get a detailed bio and career summary.
   
2. **Open Portfolio**:  
   Type `portfolio` to open my portfolio website in your default browser.
   
3. **Contact Info**:  
   Type `phone` to see a list of my contact numbers.
   
4. **Projects**:  
   Type `projects` to view my key projects and their descriptions.
   
5. **Help**:  
   Type `help` to see all available commands.
   
6. **Exit**:  
   Type `exit` to close the program.

---

## 🌐 Platform Compatibility

- **Windows**: Opens URLs using the `start` command.
- **macOS**: Opens URLs using the `open` command.
- **Linux**: Opens URLs using the `xdg-open` command.

---

## 📄 License

This project is licensed under the MIT License. Feel free to use, modify, and share!

---

Explore my journey, discover my projects, and get in touch—all from the convenience of a simple command-line interface!
This project is licensed under the MIT License.

---

This README file provides clear instructions on how to set up and use the program, details the functions and variables involved, and offers insights into the core functionality of the project.
