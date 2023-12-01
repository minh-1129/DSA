/*
4.	Chu trình lẻ
Chứng minh rằng một đồ thị là đồ thị hai mầu (bipartite) khi và chỉ khi nó không chứa chu trình độ dài lẻ. Đồ thị hai mầu là đồ thị mà có thể dùng hai mầu để tô mỗi đỉnh một mầu sao cho không có cạnh nào nối giữa hai đỉnh cùng mầu.
nào nối giữa hai đỉnh cùng mầu.
Gợi ý: chứng minh bằng phản chứng.
*/

/*
Ở đây ta xét đồ thị liên thông
Điều kiện cần: Đồ thị không có chu trình lẻ là đồ thị hai mầu

Ta chọn một đỉnh v bất kỳ thuộc đồ thị
Chia đồ thị làm hai tập đỉnh
tập A gồm các đỉnh có đường đi ngắn nhất đến v độ dài chẵn
tập B gồm các đỉnh có đường đi ngắn nhất đến v độ dài lẻ
dễ thấy A không giao B và v thuộc tập A (đường đi độ dài 0)

Giả sử tồn tại hai đỉnh u1 và u2 thuộc tập B kề nhau
thì sẽ tồn tại đường đi độ dài lẻ từ v qua u1, u2 và về v
mà tồn tại đường đi độ dài lẻ thì tồn tại chu trình lẻ
nên G tồn tại chu trình lẻ => vô lí
Vậy không tồn tại hai đỉnh trong tập B kề nhau
và hai đỉnh bất kỳ trong tập A không thể kề nhau chứng minh tương tự
vậy đồ thị có thể chia thanh hai tập đỉnh riêng biệt và trong mỗi tập
không tồn tại hai đỉnh kề nhau.

Tô màu mỗi tập một màu và thỏa mãn tính chất đồ thị hai mầu


Điều kiện đủ: Đồ thị hai mầu không có chu trình lẻ
Giả sử tồn tại chu trình độ dài lẻ trên đồ thị bipartite
Các đỉnh của đồ thị bipartite có thể chia thành hai tập giả sử là A và B theo tính chất của đồ thị hai phía
Xét một chu trình lẻ bất kì G {v1, v2,..,vn, v1}
Giả sử v1 thuộc A vậy v2 phải thuộc B vì không có đường đi nào nối hai đỉnh cùng 1 tập
cứ thế tổng quát ta có vi thuộc A nếu i lẻ và thuộc B nếu i chẵn
nhưng chu trình độ dài lẻ suy ra n lẻ vậy vn thuộc A, mà theo chu trình lại có
cạnh nối vn với v1 => vô lí
Vậy đồ thị hai mầu không thể có chu trình lẻ

Vậy điều kiện cần và điều kiện đủ đã được chứng minh
*/
