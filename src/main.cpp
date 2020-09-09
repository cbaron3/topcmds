#include "lib/termcolor.hpp"
#include "lib/CLI11.hpp"

#include "inc/topcmds.hpp"

#include <string>
#include <array>
#include <iostream>

int main(int argc, char const *argv[])
{
    CLI::App app("List top Linux commands!");

    int all_flag_val{0};
    CLI::Option *all_flag = app.add_flag("--all", all_flag_val, "Show all commands");

    int nav_flag_val{0};
    CLI::Option *nav_flag = app.add_flag("--nav", nav_flag_val, "Show navigation commands");

    int info_flag_val{0};
    CLI::Option *info_flag = app.add_flag("--info", info_flag_val, "Show information commands");

    int text_flag_val{0};
    CLI::Option *text_flag = app.add_flag("--text", text_flag_val, "Show text manipulation commands");

    int sys_flag_val{0};
    CLI::Option *sys_flag = app.add_flag("--sys", sys_flag_val, "Show system commands");

    int users_flag_val{0};
    CLI::Option *users_flag = app.add_flag("--users", users_flag_val, "Show user management commands");

    int files_flag_val{0};
    CLI::Option *files_flag = app.add_flag("--files", files_flag_val, "Show file commands");

    int comm_flag_val{0};
    CLI::Option *comm_flag = app.add_flag("--comm", comm_flag_val, "Show network communication commands");

    int wf_flag_val{0};
    CLI::Option *wf_flag = app.add_flag("--wf", wf_flag_val, "Show workflow commands");

    CLI11_PARSE(app, argc, argv);

    bool valid_arg = false;
    std::cout << "\nList top Linux commands!\n\n";

    for(auto cmd : topcmds::cmds) {
        using category_t = topcmds::category_t;

        // TODO: In the future, improve this cause it is not very expandable nor maintainable
        switch(cmd.category) {
            case category_t::NAV: {
                if(all_flag->count() > 0 || nav_flag->count() > 0){
                    topcmds::print_name(cmd);
                    std::cout << " | " << termcolor::color<255, 0, 0> << "Navigation   " << termcolor::reset;
                    topcmds::print_category(cmd);

                    valid_arg = true;
                }
            } break;

            case category_t::INFO: {
                if(all_flag->count() > 0 || info_flag->count() > 0) {
                    topcmds::print_name(cmd);
                    std::cout << " | " << termcolor::color<255, 127, 0> << "Help         " << termcolor::reset;
                    topcmds::print_category(cmd);

                    valid_arg = true;
                }
            } break;

            case category_t::TEXT: {
                if(all_flag->count() > 0 || text_flag->count() > 0) {
                    topcmds::print_name(cmd);
                    std::cout << " | " << termcolor::color<255, 255, 0> << "Text         " << termcolor::reset;
                    topcmds::print_category(cmd);

                    valid_arg = true;
                }
            } break;

            case category_t::SYS: {
                if(all_flag->count() > 0 || sys_flag->count() > 0) {
                    topcmds::print_name(cmd);
                    std::cout << " | " << termcolor::color<0, 255, 0> << "System       " << termcolor::reset;
                    topcmds::print_category(cmd);

                    valid_arg = true;
                }
            } break;

            case category_t::USERS: {
                if(all_flag->count() > 0 || users_flag->count() > 0) {
                    topcmds::print_name(cmd);
                    std::cout << " | " << termcolor::color<0, 0, 255> << "Users        " << termcolor::reset;
                    topcmds::print_category(cmd);

                    valid_arg = true;
                }
            } break;

            case category_t::FILES: {
                if(all_flag->count() > 0 || files_flag->count() > 0) {
                    topcmds::print_name(cmd);
                    std::cout << " | " << termcolor::color<75, 0, 130> << "File         " << termcolor::reset;
                    topcmds::print_category(cmd);

                    valid_arg = true;
                }
            } break;

            case category_t::COMM: {
                if(all_flag->count() > 0 || comm_flag->count() > 0) {
                    topcmds::print_name(cmd);
                    std::cout << " | " << termcolor::color<148, 0, 211> << "Communication" << termcolor::reset;
                    topcmds::print_category(cmd);

                    valid_arg = true;
                }
            } break;

            case category_t::WORKFLOW: {
                if(all_flag->count() > 0 || wf_flag->count() > 0) {
                    topcmds::print_name(cmd);
                    std::cout << " | " << termcolor::color<255, 255, 255> << "Workflow     " << termcolor::reset;
                    topcmds::print_category(cmd);

                    valid_arg = true;
                }
            } break;
        }
    }

    if(!valid_arg) {
            std::cout << "* No valid args supplied. Run with -h or --help for usage instructions" << std::endl;
    }

    return 0;
}
