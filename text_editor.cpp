#include <iostream>
#include "text_editor.h"

using namespace std;

text_editor::text_editor(const string& save_file):
		save_file(save_file) {
	write_mode = false;
}

void text_editor::run_text_editor() {
	string command = "";
        //TODO impliment display with ncurses
}

void text_editor::print_help() {
	cout << "Commands:\n"
		 << "i    -- start input\n"
		 << "help -- this screen" << endl;
}
