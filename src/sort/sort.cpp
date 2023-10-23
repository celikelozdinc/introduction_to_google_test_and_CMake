#include "defs/definitions.h"

std::vector<Post> process_posts(std::vector<std::vector<Post>> matrix) {
    auto comparator = [ ] (const Post& first, const Post& second) {
        if (first.created_at == second.created_at) {
            // For the posts that they have same 'created_at' value,
            // they should be ordered by their 'id'
            return first.id < second.created_at;
        }

        return first.created_at < second.created_at;
    };

    std::vector<Post> postList;
    std::size_t postsSize{0};f

    for (auto& posts : matrix) {
        for (const auto& post : posts) {
            std::cout << post;
            postsSize++;
        }
    }
    postList.reserve(postsSize); // allocate space for all posts


    for (auto& posts : matrix) {
        std::copy(posts.begin(), posts.end(), std::back_inserter(postList));
    }

    std::cout << "\n\n\n";

    std::sort(postList.begin(), postList.end(), comparator);

    for (const auto& post : postList) {
        std::cout << post;
    }

    return postList;

}