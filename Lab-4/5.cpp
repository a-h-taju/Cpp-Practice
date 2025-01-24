/*....05....You are building a social media platform and need to create a class
called "Post" in C++. The Post class should have attributes for post ID,
author name, and content. Implement member functions to:
1. Edit the content of the post.
2. Display the post details.
Create an instance of the Post class with ID=1, author name="Jane",
and content="Hello, world!" Edit the post content to "Welcome to my
profile!" and display the updated post details.*/

#include<iostream>

using namespace std;

class post
{
public:
    string authorName,content;
    int id;
    void editContent(string newContent)
    {
        content = newContent;
    }
    void postDetails()
    {
        cout<<"Post ID number = "<<id<<endl;
        cout<<"Post Author Name = "<<authorName<<endl;
        cout<<"Post Update content = "<<content<<endl;
    }
};
int main()
{
    post Post;

    cout<<"Enter the post ID = ";
    cin>>Post.id;
    cout<<"Enter the post Author Name = ";
    cin>>Post.authorName;
    cout<<"Enter the post Content = ";
    cin>>Post.content;
    Post.editContent("Welcome to my profile!");
    Post.postDetails();
    return 0;
}
