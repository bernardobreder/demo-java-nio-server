import demo.server.NIOServer;

public class Main {

  public static void main(String[] args) {
    int server = NIOServer.socketServer();
    if (server <= 0) {
      return;
    }

    NIOServer.socketClose(server);
  }

}
