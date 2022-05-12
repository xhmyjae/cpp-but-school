#ifndef TP04_MENU_H
#define TP04_MENU_H

class Menu {
    public:
        Menu() = default;
        static void execute();
        static void displayMenu();
        static int get_number(const std::string &message);
        static bool ask_continue();
        ~Menu();
};

void ex01();
void ex02();

#endif //TP04_MENU_H
