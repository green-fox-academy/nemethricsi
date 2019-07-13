#include "Blog.h"

void Blog::add(BlogPost &post)
{
    _blogPosts.push_back(post);
}

void Blog::deletePost(int index)
{
    _blogPosts.erase(_blogPosts.begin() + index);
}

void Blog::update(int index, BlogPost &post)
{
    std::replace(_blogPosts.begin(), _blogPosts.end(), _blogPosts[index], post);

}

void Blog::listBlogPosts()
{
    for (int i = 0; i < _blogPosts.size(); ++i) {
        std::cout << _blogPosts[i].getAuthorName() << std::endl;
    }

}
