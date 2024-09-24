# RiftHTTP

**RiftHTTP** is a C++ library that allows you to make HTTP requests using the WinINet API. It supports HTTP methods like GET, POST, PUT, and DELETE, making it easy to send HTTP requests and receive responses.

### Features
  - **HTTP Methods:** Supports GET, POST, PUT, and DELETE requests.
  - **Query Parameters:** Ability to add query parameters to the URL.
  - **Headers:** Easily set request headers.
  - **Timeout:** Set timeout duration for your requests.
  - **Proxy Support:** Provides support for proxy usage.
  - **Easy Integration:** Easily integrate into your projects.


### Usage
### GET Request

```cpp
#include <iostream>

#include "RiftHTTP.h"

using std::cout;
using std::endl;

int main() {

    Rift::RiftHTTP httpClient;

    // Settings for GET request
    Rift::HttpMethod method = Rift::HttpMethod::GET;
    std::string url = "https://jsonplaceholder.typicode.com/comments";
    std::map<std::string, std::string> headers = {
        {"Accept", "application/json"}
    };
    std::map<std::string, std::string> params = {
        {"id", "3"}
    };
    std::string body = "";

    Rift::HttpResponse response;

    // Send the request
    if (httpClient.SendHTTPRequest(method, url, headers, params, body, response)) {
        std::cout << "GET Request Status Code: " << response.statusCode << std::endl;
        std::cout << "GET Request Response: " << response.body << std::endl;
    }
    else {
        std::cerr << "GET request failed: " << response.errorMessage << std::endl;
    }

	return 0;
}
```

### POST Request

```cpp
#include "RiftHTTP.h"
#include <iostream>

int main() {
    Rift::RiftHTTP httpClient;

    // Settings for POST request
    Rift::HttpMethod method = Rift::HttpMethod::POST;
    std::string url = "https://jsonplaceholder.typicode.com/posts";
    std::map<std::string, std::string> headers = {
        {"Content-Type", "application/json; charset=UTF-8"}
    };
    std::map<std::string, std::string> params;
    std::string body = R"({"title": "foo", "body": "bar", "userId": 1})";

    Rift::HttpResponse response;

    // Send the request
    if (httpClient.SendHTTPRequest(method, url, headers, params, body, response)) {
        std::cout << "POST Request Status Code: " << response.statusCode << std::endl;
        std::cout << "POST Request Response: " << response.body << std::endl;
    }
    else {
        std::cerr << "POST request failed: " << response.errorMessage << std::endl;
    }

    return 0;
}
```

### PUT Request

```cpp
#include "RiftHTTP.h"
#include <iostream>

int main() {
    Rift::RiftHTTP httpClient;

    // Settings for PUT request
    Rift::HttpMethod method = Rift::HttpMethod::PUT;
    std::string url = "https://jsonplaceholder.typicode.com/posts/1";
    std::map<std::string, std::string> headers = {
        {"Content-Type", "application/json; charset=UTF-8"}
    };
    std::map<std::string, std::string> params;
    std::string body = R"({"id": 1, "title": "foo", "body": "bar", "userId": 1})";

    Rift::HttpResponse response;

    // Send the request
    if (httpClient.SendHTTPRequest(method, url, headers, params, body, response)) {
        std::cout << "PUT Request Status Code: " << response.statusCode << std::endl;
        std::cout << "PUT Request Response: " << response.body << std::endl;
    }
    else {
        std::cerr << "PUT request failed: " << response.errorMessage << std::endl;
    }

    return 0;
}
```

### DELETE Request

```cpp
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
```

### Contributing
Please submit a pull request or open an issue.

### Contact
For any questions or suggestions, please contact Discord: Jadis0x

### Links
<a href="https://learn.microsoft.com/en-us/windows/win32/wininet/wininet-reference">WinINet API Documentation</a>
<br>
<a href="https://jsonplaceholder.typicode.com/">JSONPlaceholder API</a>
