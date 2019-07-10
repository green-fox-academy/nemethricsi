#include <iostream>
#include "BlogPost.h"

void showBlogPost(BlogPost object);

int main()
{
    BlogPost loremIpsumPost("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet.", "2000.05.04.");
    showBlogPost(loremIpsumPost);

    BlogPost waitButWhyPost("Tim Urban", "Wait, But Why?",
                            "A popular long-form, stick-figure-illustrated blog about almost everything.",
                            "2010.10.10.");
    showBlogPost(waitButWhyPost);

    BlogPost getIbmPost("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump",
                        "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.",
                        "2017.03.28.");
    showBlogPost(getIbmPost);

    return 0;
}

void showBlogPost(BlogPost object)
{
    std::cout << "Blog post author: " << object.getAuthorName() << std::endl;
    std::cout << "Blog post title: " << object.getTitle() << std::endl;
    std::cout << "Blog post date: " << object.getPublicationDate() << std::endl;
    std::cout << "Blog post content: " << object.getText() << std::endl;
    std::cout << std::endl;
}