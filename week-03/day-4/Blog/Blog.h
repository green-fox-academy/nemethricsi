#ifndef BLOG_BLOG_H
#define BLOG_BLOG_H

#include <vector>
#include "BlogPost.h"

class Blog
{
public:
    void add(BlogPost &post);

    void deletePost(int index);

    void update(int index, BlogPost &post);

    void listBlogPosts();

private:
    std::vector<BlogPost> _blogPosts;
};


#endif //BLOG_BLOG_H
