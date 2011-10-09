-- this is a premake4 script
-- see http://industriousone.com/premake

solution "nyilas"
    language "C++"
    configurations { "debug", "release" }
    includedirs { "./3rdparty/include/", "./src" }
    libdirs { "./3rdparty/lib" }

    configuration { "debug" }
        targetdir "build/debug"
        defines { "DEBUG" }

    configuration { "release" }
        targetdir "build/release"

    project "test"
        kind "ConsoleApp"
        files { "./src/**.h", "./src/**.cc", "./tests/main.cc" }
        links { "gtest", "gtest_main", "pthread" }

        configuration { "debug" }
            flags { "Symbols" }

        configuration { "release" }
            defines { "NDEBUG", "RELEASE" }
            flags { "Optimize" }

    project "nyilas"
        kind "StaticLib"
        files { "./src/**.h", "./src/**.cc" }

        configuration { "debug" }
            flags { "Symbols" }

        configuration { "release" }
            defines { "NDEBUG", "RELEASE" }
            flags { "Optimize" }
