#include <iostream>
#include "Blog.h"
#include "BlogPost.h"

// Reuse your BlogPost class
//Create a Blog class which can
//store a list of BlogPosts
//add BlogPosts to the list
//delete(int) one item at given index
//update(int, BlogPost) one item at the given index and update it with another BlogPost

int main()
{
    BlogPost first("first", "title", "text", "publicationdate");
    BlogPost second("second", "title", "text", "publicationdate");
    BlogPost third("third", "title", "text", "publicationdate");

    Blog myBlog;

    myBlog.add(first);
    myBlog.add(second);
    myBlog.add(third);

    myBlog.listBlogPosts();


    return 0;
}