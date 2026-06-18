/*Build a class called InstaStory with a protected property storyViews. Create a subclass called SponsoredStory that can access and display the storyViews value.*/

#include <iostream>
using namespace std;

class InstaStory {
protected:
    int storyViews;

public:
    InstaStory(int views) {
        storyViews = views;
    }
};

class SponsoredStory : public InstaStory {
public:
    SponsoredStory(int views) : InstaStory(views) {}

    void displayViews() {
        cout << "Story Views: " << storyViews << endl;
    }
};

int main() {
    SponsoredStory sponsored(5000);

    sponsored.displayViews();

    return 0;
}
