#pragma once

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie {
public:
    std::string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
    bool operator==(const Movie& new_movie) const {
        return title == new_movie.title && genre == new_movie.genre && duration == new_movie.duration;
    }
};
