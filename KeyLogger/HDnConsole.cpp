//#include <Windows.h>
//
//LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
//    switch (msg) {
//    case WM_CLOSE:
//        DestroyWindow(hwnd);
//        break;
//    case WM_DESTROY:
//        PostQuitMessage(0);
//        break;
//    default:
//        return DefWindowProc(hwnd, msg, wParam, lParam);
//    }
//    return 0;
//}
//
//int main(){
//
//    const char* CLASS_NAME = "MyHiddenWindowClass";
//
//    WNDCLASS wc = {};
//    wc.lpfnWndProc = WndProc;
//    wc.hInstance = GetModuleHandle(NULL);
//
//    RegisterClass(&wc);
//
//    HWND hwnd = CreateWindowEx(
//        0,                        
//        NULL,                 
//        NULL,          
//        0,                          
//        CW_USEDEFAULT, CW_USEDEFAULT,
//        0, 0,                       
//        NULL,                       
//        NULL,                      
//        GetModuleHandle(NULL),      
//        NULL                        
//    );
//
//    if (hwnd == NULL) {
//        return 0;
//    }
//
//	return 0;
//}