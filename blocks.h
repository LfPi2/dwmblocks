//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon Command Update Interval Update Signal*/
	{"time: ", "date +%0H:%0M", 1, 0},
	{"date: ", "date +%A\\ %0d/%0m/%Y", 60, 0},
	{"battery: ", "acpi | grep -o -e '[0-9]*%'", 60, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  |  ";
static unsigned int delimLen = 5;
