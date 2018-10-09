package demo.server;

public class NIOServer {

  static {
    System.loadLibrary("libnioserver");
  }

  public static native int socketServer();

}
