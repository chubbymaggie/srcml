x = [=]() { };

x = [=a]() { };

x = [&]( ) { };

x = [&a]( ) { };

x = [&a, &b, =]() { };

x = [=a, =b, &]() { };
