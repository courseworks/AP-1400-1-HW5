#include <limits.h>
#include "aphw5.h"
#include "student.h"
#include "apmaxheap.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include "gtest/gtest.h"
namespace
{
/*
TEST(APHW5Test, Test0)
{
    APMaxHeap<int> ap;
    ap.push(10);
    ap.push(20);
    ap.push(5);
    ap.push(12);
    ap.push(8);
    std::vector<int> res{ap.show()};
    EXPECT_EQ(5, res[2]);
}

TEST(APHW5Test, Test1)
{
    APMaxHeap<int> ap;
    ap.push(10);
    ap.push(20);
    ap.push(5);
    ap.push(12);
    ap.push(8);
    std::vector<int> res{ap.show()};
    EXPECT_EQ(8, res[4]);
}

TEST(APHW5Test, Test2)
{
    APMaxHeap<int> ap;
    ap.push(10).push(20).push(5).push(12).push(8);
    std::vector<int> res{ap.show()};
    EXPECT_EQ(8, res[4]);
}

TEST(APHW5Test, Test3)
{
    APMaxHeap<int> ap;
    ap.push(10).push(20);
    ap.pop();
    std::vector<int> res{ap.show()};
    EXPECT_EQ(10, res[0]);
}

TEST(APHW5Test, Test4)
{
    APMaxHeap<int> ap;
    ap.push(10).push(20).pop();
    std::vector<int> res{ap.show()};
    EXPECT_EQ(10, res[0]);
}

TEST(APHW5Test, Test5)
{
    APMaxHeap<int> ap;
    ap.push(10).push(20).push(28);
    APMaxHeap<int> ap1{ap};
    ap1.pop();
    std::vector<int> res{ap.show()};
    std::vector<int> res1{ap1.show()};
    EXPECT_EQ(28, res[0]);
    EXPECT_EQ(20, res1[0]);
}

TEST(APHW5Test, Test6)
{
    APMaxHeap<int> ap;
    ap.push(10).push(20).push(28);
    APMaxHeap<int> ap1{ap + 95};
    std::vector<int> res{ap.show()};
    std::vector<int> res1{ap1.show()};
    EXPECT_EQ(28, res[0]);
    EXPECT_EQ(95, res1[0]);
}

TEST(APHW5Test, Test7)
{
    APMaxHeap<int> ap;
    ap.push(10).push(20).push(28);
    APMaxHeap<int> ap1{ap + 95};
    ap1 = ap = ap + 110;
    std::vector<int> res{ap.show()};
    std::vector<int> res1{ap1.show()};
    EXPECT_EQ(110, res[0]);
    EXPECT_EQ(110, res1[0]);
}

TEST(APHW5Test, Test8)
{
    Student s1{9423013, 18.1};
    Student s2{9423037, 19};
    Student s3{9423091, 18.9};
    Student s4{9423102, 18.5};
    
    APMaxHeap<Student> aps;
    aps.push(s1).push(s2).push(s3).push(s4);
    std::vector<Student> res{aps.show()};
    EXPECT_EQ(9423013, res[3].getID());
}

TEST(APHW5Test, Test9)
{
    Student s1{9423013, 18.1};
    Student s2{9423037, 19};
    Student s3{9423091, 18.9};
    Student s4{9423102, 18.5};
    
    APMaxHeap<Student> aps;
    aps.push(s1).push(s2).push(s3).push(s4).pop();
    std::vector<Student> res{aps.show()};
    EXPECT_EQ(9423102, res[1].getID());
}

TEST(APHW5Test, Test10)
{
    Student s1{9423013, 18.1};
    Student s2{9423037, 19};
    Student s3{9423091, 18.9};
    Student s4{9423102, 18.5};
    
    APMaxHeap<Student> aps1;
    aps1.push(s1).push(s2).push(s3);
    APMaxHeap<Student> aps2{aps1};
    aps2.pop();
    std::vector<Student> res1{aps1.show()};
    std::vector<Student> res2{aps2.show()};
    EXPECT_EQ(9423037, res1[0].getID());
}


TEST(APHW5Test, Test11)
{
    Student s1{9423013, 18.1};
    Student s2{9423037, 19};
    Student s3{9423091, 18.9};
    Student s4{9423102, 18.5};
    
    APMaxHeap<Student> aps1;
    aps1.push(s1).push(s2).push(std::move(s3));
    std::vector<Student> res1{aps1.show()};
    EXPECT_EQ(9423091, res1[2].getID());
}

TEST(APHW5Test, Test12)
{
    Student s1{9423013, 18.1};
    std::cout<<"Student: "<<s1<<std::endl;
}
*/
}
