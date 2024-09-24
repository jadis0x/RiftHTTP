#include "RiftHTTP.h"
#include <iostream>

int main() {
    Rift::RiftHTTP httpClient;

    // Settings for DELETE request
    Rift::HttpMethod method = Rift::HttpMethod::DEL;
    std::string url = "https://jsonplaceholder.typicode.com/posts/1";
    std::map<std::string, std::string> headers;
    std::map<std::string, std::string> params;
    std::string body = "";

    Rift::HttpResponse response;

    // Send the request
    if (httpClient.SendHTTPRequest(method, url, headers, params, body, response)) {
        std::cout << "DELETE Request Status Code: " << response.statusCode << std::endl;
        std::cout << "DELETE Request Response: " << response.body << std::endl;
    }
    else {
        std::cerr << "DELETE request failed: " << response.errorMessage << std::endl;
    }

    return 0;
}