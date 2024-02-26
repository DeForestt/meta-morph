#pragma once
#define DECORATOR(name) template< class T > auto name(T&& function) { auto wrapped = [func = std::forward<T>(function)](auto&&... args)
#define END_DECORATOR ; return wrapped; }
#define DECORATE(decorator, name, ...) auto name = decorator([](__VA_ARGS__) -> decltype(auto)
#define END_DECORATE );
#define SUBJ() func(std::forward<decltype(args)>(args)...)