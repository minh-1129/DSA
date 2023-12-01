/*
3.	Phát hiện cạnh song song
Thiết kế một thuật toán tuyến tính để đếm số cạnh song song trong một đồ thị
*/

/*
Hai cạnh song song là hai cạnh cùng nối hai đỉnh
Giả sử đầu vào là danh sách cạnh, ta sẽ xét từng cạnh, nếu đã có cạnh nối hai đỉnh của cạnh này rồi thì ta tăng biến đếm
Để đơn giản ta sẽ lưu xem đã có cạnh nối hai đỉnh chưa bằng ma trận bool M, nếu có cạnh nối hai đỉnh u và v thì M[u][v] = M[v][u] = true
*/
