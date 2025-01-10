# Digital-Library
---

# **Sourav Kaushik's Digital Library**

**Version:** 1.0  
**Author:** Sourav Kaushik

## **Project Overview**
"Sourav Kaushik's Digital Library" is a command-line application written in C. The app provides interactive options for users to explore my bio, professional portfolio, projects, and contact details. It includes URL redirection to my full portfolio website and showcases my professional journey in an intuitive way.

## **Key Features**
- `About Me` section with my bio and professional background.
- `Portfolio` section with a link to my full portfolio website.
- `Contact Info` section with a list of contact numbers.
- `Projects` section with descriptions of my key projects.
- Command-based interaction, where users can type specific commands to get the information they need.
- Cross-platform URL redirection to open the portfolio website.

## **Getting Started**

### **Prerequisites**
- A C compiler (e.g., GCC, Clang).
- Terminal or command-line interface.

### **Installation**
1. Clone the repository or download the project files.
    ```bash
    git clone https://github.com/yourusername/digital-library.git
    ```
2. Navigate to the project directory.
    ```bash
    cd digital-library
    ```
3. Compile the program.
    ```bash
    gcc main.c -o digital-library
    ```
4. Run the program.
    ```bash
    ./digital-library
    ```

## **How It Works**

### **Commands:**
- **about**: Displays Sourav Kaushik's bio and professional background.
- **portfolio**: Redirects to Sourav's full portfolio website.
- **phone**: Lists contact numbers.
- **projects**: Lists key projects Sourav is working on.
- **help**: Displays available commands.
- **exit**: Exits the application.

### **Functions:**

1. **`display_about()`**  
   - **Description**: Displays the "About Me" section.
   - **Key Variables**:  
     - `about_text`: A string containing bio and background information.
   - **Usage**: Called when the user types `about`.

2. **`open_portfolio()`**  
   - **Description**: Opens the portfolio website in the user's default browser.
   - **Key Variables**:  
     - `url`: A string containing the URL of the portfolio website.
   - **Platform-Specific Behavior**: Uses system calls to open the URL on different platforms (Windows, macOS, Linux).

3. **`display_contact_info()`**  
   - **Description**: Lists Sourav's contact numbers.
   - **Key Variables**:  
     - `contacts[]`: Array of strings storing phone numbers.
   - **Usage**: Called when the user types `phone`.

4. **`list_projects()`**  
   - **Description**: Displays key projects and their brief descriptions.
   - **Key Variables**:  
     - `projects[]`: Array storing project titles.
     - `project_descriptions[]`: Array storing corresponding project descriptions.
   - **Usage**: Called when the user types `projects`.

5. **`help_menu()`**  
   - **Description**: Shows the available commands for the user.
   - **Key Variables**:  
     - `commands[]`: Array of available command strings.
   - **Usage**: Called when the user types `help`.

6. **`exit_program()`**  
   - **Description**: Safely exits the application.
   - **Key Variables**: None.
   - **Usage**: Called when the user types `exit`.

## **File Structure**

- `main.c`: The core of the application, containing all functions and the command-line interface logic.
- `README.md`: Documentation for the project.
  
## **Variables Overview**

- **String Variables**:
  - `about_text`: Holds the text for the "About Me" section.
  - `url`: Stores the portfolio website URL.
  - `contacts[]`: Array containing contact phone numbers.
  - `projects[]`: Array of project names.
  - `project_descriptions[]`: Array of project descriptions.
  
- **Command Variables**:
  - `commands[]`: Array holding all valid commands (`about`, `portfolio`, `phone`, `projects`, etc.).

## **Usage Example**

1. Type `about` to get a detailed bio.
2. Type `portfolio` to open Sourav's portfolio website in the browser.
3. Type `phone` to list contact numbers.
4. Type `projects` to see a list of Sourav’s key projects.
5. Type `help` for a list of available commands.
6. Type `exit` to quit the program.

## **Platform Compatibility**
- **Windows**: Uses the `start` command to open URLs.
- **macOS**: Uses the `open` command to open URLs.
- **Linux**: Uses the `xdg-open` command to open URLs.

## **License**
This project is licensed under the MIT License.

---

This README file provides clear instructions on how to set up and use the program, details the functions and variables involved, and offers insights into the core functionality of the project.
