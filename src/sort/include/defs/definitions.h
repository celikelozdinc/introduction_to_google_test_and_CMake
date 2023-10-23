#ifndef SCORP_INTERVIEW_SRC_SORT_INCLUDE_DEFS_DEFINITIONS_H
#define SCORP_INTERVIEW_SRC_SORT_INCLUDE_DEFS_DEFINITIONS_H

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

struct Post {
    uint64_t id{0};
    std::string description;
    std::string image;
    uint64_t created_at{0};
    friend std::ostream& operator<<(std::ostream& os, const Post& post) {
        return os << "Created at = " << post.created_at << ", Id = " << post.id <<  ", Description = " << post.description << '\n';
    }
};

std::vector<Post> process_posts(std::vector<std::vector<Post>>);

#endif
