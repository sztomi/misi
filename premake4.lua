-- this is a premake4 script
-- see http://industriousone.com/premake

solution "misi"
    language "C++"
    configurations { "debug", "release" }
    includedirs { "./3rdparty/include/", "./src" }
    libdirs { "./3rdparty/lib" }

    configuration { "debug" }
        targetdir "build/debug"
        defines { "DEBUG" }

    configuration { "release" }
        targetdir "build/release"

    project "misi"
        kind "StaticLib"
        files { "./src/**.h", "./src/**.cc" }

        configuration { "debug" }
            flags { "Symbols" }
            buildoptions { "--std=c++0x", "-pedantic", "-Wall", "-Wextra", "-Werror" }

        configuration { "release" }
            defines { "NDEBUG", "RELEASE" }
            flags { "Optimize" }
            buildoptions { "--std=c++0x", "-pedantic", "-Wall", "-Wextra", "-Werror" }

    project "test"
        kind "ConsoleApp"
        files { "./src/**.h", "./src/**.cc", "./tests/main.cc" }
        links { "gtest", "gtest_main", "pthread" }

        configuration { "debug" }
            flags { "Symbols" }

        configuration { "release" }
            defines { "NDEBUG", "RELEASE" }
            flags { "Optimize" }
