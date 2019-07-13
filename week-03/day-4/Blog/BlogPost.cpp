#include "BlogPost.h"

BlogPost::BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
                   const std::string &publicationDate) : _authorName(authorName), _title(title), _text(text),
                                                         _publicationDate(publicationDate)
{
    std::cout << "constructor with 4 parameters ran" << std::endl;
}

const std::string &BlogPost::getAuthorName() const
{
    return _authorName;
}

const std::string &BlogPost::getTitle() const
{
    return _title;
}

const std::string &BlogPost::getText() const
{
    return _text;
}

const std::string &BlogPost::getPublicationDate() const
{
    return _publicationDate;
}