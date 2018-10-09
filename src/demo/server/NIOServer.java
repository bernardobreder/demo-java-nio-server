package demo.server;

public class NIOServer {

  static {
    System.loadLibrary("libnioserver");
  }

  private static native int socketServer();

}
