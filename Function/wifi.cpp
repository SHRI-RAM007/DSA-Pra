#include <iostream>
#include <string>
#include <windows.h>
#include <wininet.h>

#pragma comment(lib, "wininet.lib")

int main() {
    
    HINTERNET hInternet = InternetOpen("LoginApp", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
    if (!hInternet) {
        std::cerr << "InternetOpen failed. Error: " << GetLastError() << std::endl;
        return 1;
    }

   
    HINTERNET hConnect = InternetConnect(hInternet, "192.168.21.1", 8090, NULL, NULL, INTERNET_SERVICE_HTTP, 0, 0);
    if (!hConnect) {
        std::cerr << "InternetConnect failed. Error: " << GetLastError() << std::endl;
        InternetCloseHandle(hInternet);
        return 1;
    }

    
    HINTERNET hRequest = HttpOpenRequest(hConnect, "POST", "/httpclient.html", NULL, NULL, NULL, 0, 0);
    if (!hRequest) {
        std::cerr << "HttpOpenRequest failed. Error: " << GetLastError() << std::endl;
        InternetCloseHandle(hConnect);
        InternetCloseHandle(hInternet);
        return 1;
    }

    
    std::string postData = "mode=191&username=2022946&password=Ram@&a=1690532608856&producttype=0";
    
    
    std::string headers = "Content-Type: application/x-www-form-urlencoded\r\n";

   
    BOOL bRequestSent = HttpSendRequest(hRequest, headers.c_str(), headers.length(), (LPVOID)postData.c_str(), postData.length());
    if (!bRequestSent) {
        std::cerr << "HttpSendRequest failed. Error: " << GetLastError() << std::endl;
        InternetCloseHandle(hRequest);
        InternetCloseHandle(hConnect);
        InternetCloseHandle(hInternet);
        return 1;
    }

    
    char buffer[1024];
    DWORD bytesRead;
    std::string response;
    while (InternetReadFile(hRequest, buffer, sizeof(buffer), &bytesRead) && bytesRead > 0) {
        response.append(buffer, bytesRead);
    }

    std::cout << "Login attempt made." << std::endl;
    std::cout << "Response: " << response << std::endl;

    
    InternetCloseHandle(hRequest);
    InternetCloseHandle(hConnect);
    InternetCloseHandle(hInternet);

    return 0;
}