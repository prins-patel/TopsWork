/*“Creator Dashboard Lite”Objective: Create a console app for digital creators to manage content ideas.Trainer Guidelines:Implement Content class (title, platform, views, status).Allow user to add, edit, delete content items.Store data using file handling.
Pending
Tasks
1.
Create a Content class with properties: title, platform, views, and status. Write a method to display all details of a Content object.
2.
Build a console menu that lets users add new content ideas (title, platform, views, status) and save each entry to a text file named content_list.txt.<br><br><em><strong>Hint:</strong> Use file handling to append each new content item to the file.</em>
3.
Implement a function to read all content items from content_list.txt and display them in a numbered list, showing title and platform for each.
4.
Add an option in your console app to let users update the status of any content idea by selecting its number from the displayed list and saving the change back to the file.<br><br><em><strong>Hint:</strong> You will need to read all items, modify the selected one, and overwrite the file.</em>
5.
Add a feature to delete a content item by its number from the list, update the file accordingly, and display the updated list to confirm deletion.*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    void display() {
        cout << "Title    : " << title << endl;
        cout << "Platform : " << platform << endl;
        cout << "Views    : " << views << endl;
        cout << "Status   : " << status << endl;
        cout << "------------------------" << endl;
    }
};

void addContent() {
    Content c;

    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, c.title);

    cout << "Enter Platform: ";
    getline(cin, c.platform);

    cout << "Enter Views: ";
    cin >> c.views;
    cin.ignore();

    cout << "Enter Status: ";
    getline(cin, c.status);

    ofstream file("content_list.txt", ios::app);

    file << c.title << "|"
         << c.platform << "|"
         << c.views << "|"
         << c.status << endl;

    file.close();

    cout << "\nContent added successfully!\n";
}

vector<Content> loadContent() {
    vector<Content> contents;
    ifstream file("content_list.txt");

    string line;

    while (getline(file, line)) {
        Content c;
        string tempViews;

        stringstream ss(line);

        getline(ss, c.title, '|');
        getline(ss, c.platform, '|');
        getline(ss, tempViews, '|');
        getline(ss, c.status);

        c.views = stoi(tempViews);

        contents.push_back(c);
    }

    file.close();
    return contents;
}

void displayContentList() {
    vector<Content> contents = loadContent();

    if (contents.empty()) {
        cout << "\nNo content found.\n";
        return;
    }

    cout << "\n===== CONTENT LIST =====\n";

    for (int i = 0; i < contents.size(); i++) {
        cout << i + 1 << ". "
             << contents[i].title
             << " (" << contents[i].platform << ")"
             << endl;
    }
}

void saveAll(vector<Content>& contents) {
    ofstream file("content_list.txt");

    for (int i = 0; i < contents.size(); i++)
{
    file << contents[i].title << "|"
         << contents[i].platform << "|"
         << contents[i].views << "|"
         << contents[i].status << endl;
}

    file.close();
}

void updateStatus() {
    vector<Content> contents = loadContent();

    if (contents.empty()) {
        cout << "\nNo content available.\n";
        return;
    }

    displayContentList();

    int choice;
    cout << "\nSelect content number: ";
    cin >> choice;

    if (choice < 1 || choice > contents.size()) {
        cout << "Invalid choice!\n";
        return;
    }

    cin.ignore();

    cout << "Enter new status: ";
    getline(cin, contents[choice - 1].status);

    saveAll(contents);

    cout << "\nStatus updated successfully!\n";
}

void deleteContent() {
    vector<Content> contents = loadContent();

    if (contents.empty()) {
        cout << "\nNo content available.\n";
        return;
    }

    displayContentList();

    int choice;
    cout << "\nEnter content number to delete: ";
    cin >> choice;

    if (choice < 1 || choice > contents.size()) {
        cout << "Invalid choice!\n";
        return;
    }

    contents.erase(contents.begin() + (choice - 1));

    saveAll(contents);

    cout << "\nContent deleted successfully!\n";

    cout << "\nUpdated Content List:\n";

    for (int i = 0; i < contents.size(); i++) {
        cout << i + 1 << ". "
             << contents[i].title
             << " (" << contents[i].platform << ")"
             << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== Creator Dashboard Lite =====\n";
        cout << "1. Add Content Idea\n";
        cout << "2. View Content List\n";
        cout << "3. Update Content Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContent();
                break;

            case 2:
                displayContentList();
                break;

            case 3:
                updateStatus();
                break;

            case 4:
                deleteContent();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
