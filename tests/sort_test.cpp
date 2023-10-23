#include <gtest/gtest.h>
#include "defs/definitions.h"


TEST(SortTests, SortPosts)
{
    // Arrange : prepare data
    auto make_post = [] (uint64_t id, std::string desc, std::string img, uint64_t created) -> Post {
        return Post{.id = id, .description = std::move(desc), .image = std::move(img), .created_at = created};
    };

    std::vector<Post> posts1 = {
            make_post(88, "desc88", "img88", 8),
            make_post(11, "desc11", "img11", 11),
            make_post(22, "desc22", "img22", 2),
            make_post(33, "desc33", "img33", 5),
            make_post(4, "desc4", "img4", 4),
    };

    std::vector<Post> posts2 = {
            make_post(9, "desc9", "img9", 9),
            make_post(7, "desc77", "img77", 7),
            make_post(44, "desc44", "img44", 4),
            make_post(66, "desc66", "img66", 6),
            make_post(55, "desc55", "img55", 5),
            make_post(99, "desc99", "img99", 9),
    };

    std::vector<std::vector<Post>> matrix {posts1, posts2};
    // Assert the list of posts are populated properly
    ASSERT_EQ(8, matrix[0][0].created_at);
    ASSERT_EQ(7, matrix[1][1].created_at);

    // Act : sort the list of list of posts
    const auto& sortedPosts = process_posts(matrix);

    // Assert sorted posts
    ASSERT_EQ(2, sortedPosts[0].created_at);
    ASSERT_EQ(11, sortedPosts[sortedPosts.size() -1].created_at);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}