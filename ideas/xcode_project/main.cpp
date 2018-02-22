//
//  main.cpp
//  cpptest
//
//  Created by Akan, Oz on 2/20/18.
//  Copyright © 2018 Akan, Oz. All rights reserved.
//

#include <iostream>
#include "thing.hpp"
#include "being.hpp"
#include <aws/core/Aws.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/Bucket.h>


using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    Thing* thing = new Thing("thing");
    cout << thing->get_name() << endl;
    delete thing;
    
    Being* being = new Being("being", animal);
    cout << being->get_name() << endl;
    delete being;

    Aws::SDKOptions options;
    Aws::InitAPI(options);
    {
        cout << "Hello AWS C++ SDK" << endl;
        // make your SDK calls here.
        Aws::S3::S3Client s3_client;
        auto outcome = s3_client.ListBuckets();
        if (outcome.IsSuccess())
        {
            std::cout << "Your Amazon S3 buckets:" << std::endl;
            
            Aws::Vector<Aws::S3::Model::Bucket> bucket_list =
            outcome.GetResult().GetBuckets();
            
            for (auto const &bucket : bucket_list)
            {
                std::cout << "  * " << bucket.GetName() << std::endl;
            }
        }
        else
        {
            std::cout << "ListBuckets error: "
            << outcome.GetError().GetExceptionName() << " - "
            << outcome.GetError().GetMessage() << std::endl;
        }
    }
    Aws::ShutdownAPI(options);
    
    
    return 0;
}
