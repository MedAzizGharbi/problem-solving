import java.net.ServerSocket;
public void main() throws IOException{
		ServerSocket serverSocket = new ServerSocket(8080);
		System.out.println("Server started at port : 8080");
		while (true) {
			try {
				Socket client = serverSocket.accept();
			} catch (Exception e) {
						System.out.println("mochkla");
			}
		}
}
