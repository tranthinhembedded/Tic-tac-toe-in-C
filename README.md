# Tic Tac Toe (Cờ ca-rô) bằng C

## Giới thiệu
Tic Tac Toe là một trò chơi kinh điển dành cho hai người chơi. Trong dự án này, chúng ta sẽ triển khai trò chơi này bằng ngôn ngữ lập trình C. Trò chơi được thiết kế với giao diện console và cho phép hai người chơi luân phiên đánh dấu "X" và "O" trên bảng 3x3. 

## Tính năng chính
- **Khởi tạo bảng trò chơi**: Tất cả các ô được thiết lập ban đầu là trống.
- **In bảng trò chơi**: Hiển thị trạng thái bảng sau mỗi lượt.
- **Nhập bước đi**: Người chơi nhập tọa độ để đánh dấu "X" hoặc "O".
- **Kiểm tra kết quả**:
   - Xác định người thắng khi có một hàng ngang, hàng dọc hoặc đường chéo cùng ký hiệu.
   - Xác định kết quả hòa khi tất cả các ô đều được điền mà không có người thắng.
- **Chuyển lượt**: Lượt chơi được chuyển đổi giữa hai người.

## Hướng dẫn chạy

### 1. Biên dịch chương trình
Sử dụng trình biên dịch GCC để biên dịch mã nguồn:
```bash
gcc tic_tac_toe.c -o tic_tac_toe
```

### 2. Chạy chương trình
Chạy tệp thực thi vừa tạo:
```bash
./tic_tac_toe
```

## Cách chơi
1. Chương trình hiển thị bảng 3x3.
2. Hai người chơi lần lượt nhập tọa độ (hàng và cột, từ 1 đến 3) để đánh dấu "X" hoặc "O".
3. Trò chơi kết thúc khi:
   - Một người thắng (có 3 ký hiệu giống nhau trên một hàng, cột hoặc đường chéo).
   - Tất cả các ô đã được điền và không có người thắng (hòa).

## Mở rộng
- Thêm tính năng AI để người chơi đấu với máy.
- Tăng kích thước bảng và số lượng ô cần để thắng.
- Cải thiện giao diện đồ họa thay vì sử dụng console.

---
Chúc bạn vui vẻ khi khám phá dự án này! Nếu có thắc mắc, đừng ngần ngại hỏi. 😊
