#include <iostream>

#include <io.h>
#include <unistd.h>

#include "absl/types/optional.h"

int main (int argc, char** argv)
{
    absl::optional<int> i(argc);

    std::cout << "argc = " << *i << "\n";

    return 0;
}
