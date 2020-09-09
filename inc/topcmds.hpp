#pragma once

namespace topcmds {
    constexpr unsigned int LONGEST_NAME = 10;

    enum class category_t {
        NAV,
        INFO,
        TEXT,
        SYS,
        USERS,
        FILES,
        COMM,
        WORKFLOW,
    };

    struct cmd_t {
        std::string name;
        category_t category;
        std::string description;
    };

    const std::array<cmd_t, 100> cmds = {
        cmd_t{"exit", category_t::NAV, "Logout and close the terminal"},
        cmd_t{"whatis", category_t::INFO, "Display one-line manual page descriptions"},
        cmd_t{"clear", category_t::NAV, "Clear terminal screen"},
        cmd_t{"man", category_t::INFO, "View online reference manuals"},
        cmd_t{"less", category_t::TEXT, "View and search text files"},
        cmd_t{"pwd", category_t::NAV, "Print name of the current directory"},
        cmd_t{"ls", category_t::NAV, "List files in a directory"},
        cmd_t{"cd", category_t::NAV, "Change current directory"},
        cmd_t{"bash", category_t::SYS, "Interact with the terminal"},
        cmd_t{"cat", category_t::TEXT, "Send input to an output stream"},
        cmd_t{"type", category_t::INFO, "Show a command's type and location"},
        cmd_t{"alias", category_t::SYS, "Create custom commands"},
        cmd_t{"whoami", category_t::USERS, "Display the current user's name"},
        cmd_t{"whereis", category_t::INFO, "Locate binaries, manuals, and source code"},
        cmd_t{"date", category_t::SYS, "Display/set system time and date"},
        cmd_t{"touch", category_t::FILES, "Create empty files and update existing file timestamps"},
        cmd_t{"file", category_t::FILES, "Display a file's type"},
        cmd_t{"which", category_t::INFO, "Locate commands"},
        cmd_t{"echo", category_t::TEXT, "Display text and variables to terminal"},
        cmd_t{"nano", category_t::TEXT, "Text file editor"},
        cmd_t{"ln", category_t::SYS, "Create a link to a file or directory"},
        cmd_t{"mkdir", category_t::FILES, "Create a directory"},
        cmd_t{"cp", category_t::FILES, "Copy a file or directory"},
        cmd_t{"mv", category_t::FILES, "Move a file or directory"},
        cmd_t{"rm", category_t::FILES, "Delete a file or directory"},
        cmd_t{"wc", category_t::TEXT, "Count lines, words, and bytes"},
        cmd_t{"head", category_t::TEXT, "Print first lines of a file"},
        cmd_t{"tail", category_t::TEXT, "Print last lines of a file"},
        cmd_t{"apropos", category_t::INFO, "Search manual titles and descriptions"},
        cmd_t{"find", category_t::INFO, "Search for files within directories"},
        cmd_t{"sort", category_t::FILES, "Sort lines within text files"},
        cmd_t{"uniq", category_t::TEXT, "Find repeating consecutive lines"},
        cmd_t{"cut", category_t::TEXT, "Select sections from lines of text"},
        cmd_t{"diff", category_t::TEXT, "Compare lines of text files"},
        cmd_t{"comm", category_t::TEXT, "Compare two files"},
        cmd_t{"sdiff", category_t::TEXT, "Compare and merge two files"},
        cmd_t{"paste", category_t::TEXT, "Add selection of lines from two files"},
        cmd_t{"join", category_t::TEXT, "Join lines from two files"},
        cmd_t{"grep", category_t::TEXT, "Search for text patterns in a file"},
        cmd_t{"sed", category_t::TEXT, "Edit a stream of text"},
        cmd_t{"calendar", category_t::SYS, "Display reminders and calendar updates"},
        cmd_t{"cal", category_t::SYS, "Display calendar"},
        cmd_t{"sleep", category_t::SYS, "Pause system for a specified amount of time"},
        cmd_t{"crontab", category_t::SYS, "Create and schedule automated jobs"},
        cmd_t{"ps", category_t::SYS, "Display snapshot of current processes"},
        cmd_t{"printenv", category_t::SYS, "Display environment variables"},
        cmd_t{"export", category_t::SYS, "Pass environment variables to processes"},
        cmd_t{"set", category_t::SYS, "Display or set shell environment variables"},
        cmd_t{"unset", category_t::SYS, "Remove variables or functions"},
        cmd_t{"stat", category_t::SYS, "Show file or file system status"},
        cmd_t{"df", category_t::SYS, "Display file or file system space"},
        cmd_t{"du", category_t::SYS, "Display disk utilization for files and directories"},
        cmd_t{"free", category_t::SYS, "Display system RAM usage"},
        cmd_t{"pg", category_t::TEXT, "View text files page-by-page"},
        cmd_t{"more", category_t::TEXT, "View text files"},
        cmd_t{"emacs", category_t::TEXT, "Text file editor"},
        cmd_t{"vim", category_t::TEXT, "Text file editor"},
        cmd_t{"history", category_t::SYS, "Review command history"},
        cmd_t{"kill", category_t::SYS, "Send kill signal to a process"},
        cmd_t{"bg", category_t::SYS, "Move a process to the background"},
        cmd_t{"chsh", category_t::SYS, "Change login shell programs"},
        cmd_t{"uname", category_t::SYS, "Display system information"},
        cmd_t{"jobs", category_t::SYS, "Show jobs"},
        cmd_t{"dpkg", category_t::SYS, "Manage software packages"},
        cmd_t{"apt-get", category_t::SYS, "Manage software packages"},
        cmd_t{"apt-cache", category_t::SYS, "Search for packages and dependencies"},
        cmd_t{"aptitude", category_t::SYS, "Manage software packages"},
        cmd_t{"gzip", category_t::FILES, "Compress and decompress files"},
        cmd_t{"gunzip", category_t::FILES, "Decompress files"},
        cmd_t{"bzip2", category_t::FILES, "Compress and decompress files"},
        cmd_t{"xz", category_t::FILES, "Compress and decompress files"},
        cmd_t{"zip", category_t::FILES, "Compress and archive files"},
        cmd_t{"tar", category_t::FILES, "Archive files and directories"},
        cmd_t{"rsync", category_t::FILES, "Synchronize (backup) file systems"},
        cmd_t{"chmod", category_t::USERS, "Change file permissions"},
        cmd_t{"chown", category_t::USERS, "Change file owner and group"},
        cmd_t{"id", category_t::USERS, "Show user and group information"},
        cmd_t{"su", category_t::USERS, "Temporarily substitute users"},
        cmd_t{"sudo", category_t::USERS, "Run a command as supervisor"},
        cmd_t{"passwd", category_t::USERS, "Change user passwords"},
        cmd_t{"adduser", category_t::USERS, "Add users and groups"},
        cmd_t{"ping", category_t::COMM, "Send data packets to hosts"},
        cmd_t{"traceroute", category_t::COMM, "Show the packet route to hosts"},
        cmd_t{"ftp", category_t::COMM, "Transfer files over network"},
        cmd_t{"wget", category_t::COMM, "Download files non-interactively"},
        cmd_t{"ssh", category_t::COMM, "Remote server access"},
        cmd_t{"source", category_t::WORKFLOW, "Read and execute commands from a file"},
        cmd_t{"time", category_t::SYS, "Show command execution time"},
        cmd_t{"read", category_t::WORKFLOW, "Take input from a keyboard or file"},
        cmd_t{"xargs", category_t::WORKFLOW, "Build and execute commands"},
        cmd_t{"tee", category_t::WORKFLOW, "Route input to output stream and a file"},
        cmd_t{"printf", category_t::WORKFLOW, "Create formatted output"},
        cmd_t{"test", category_t::WORKFLOW, "Evaluate expression"},
        cmd_t{"if", category_t::WORKFLOW, "Conditional branch in a script"},
        cmd_t{"function", category_t::WORKFLOW, "Small script in a script"},
        cmd_t{"while", category_t::WORKFLOW, "Create program loop"},
        cmd_t{"case", category_t::WORKFLOW, "Conditional branches in a script"},
        cmd_t{"for", category_t::WORKFLOW, "Create bounded program loop"},
        cmd_t{"until", category_t::WORKFLOW, "Create program loop with terminate condition"},
        cmd_t{"fold", category_t::TEXT, "Wrap text to specified width"}
    };

    /**
     * @brief Print command names with proper format and color
     * 
     * @param cmd command definition
     */
    void print_name(cmd_t& cmd) {
        std::cout << termcolor::bold << cmd.name << termcolor::reset;
            
        int spaces = LONGEST_NAME - cmd.name.length();

        for(int i = 0; i < spaces; i++) {
            std::cout << " ";
        }               
    }

    /**
     * @brief Print command category with proper format
     * 
     * @param cmd command definition
     */
    void print_category(cmd_t& cmd) {
        std::cout << " | " << cmd.description << std::endl;
    }
}
