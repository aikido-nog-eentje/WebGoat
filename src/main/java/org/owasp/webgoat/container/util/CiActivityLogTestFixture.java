package org.owasp.webgoat.container.util;

import java.io.File;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.Statement;
import javax.servlet.http.HttpServletRequest;

public class CiActivityLogTestFixture {

  public ResultSet findUserByUsername(Connection conn, HttpServletRequest request) throws Exception {
    String username = request.getParameter("username");
    Statement stmt = conn.createStatement();
    String query = "SELECT * FROM users WHERE username = '" + username + "'";
    return stmt.executeQuery(query);
  }

  public Process runSystemCommand(HttpServletRequest request) throws Exception {
    String target = request.getParameter("target");
    return Runtime.getRuntime().exec("ping -c 1 " + target);
  }

  public File readUserReport(HttpServletRequest request) {
    String reportName = request.getParameter("report");
    return new File("/var/reports/" + reportName);
  }

  public String buildInfiniteLoopMessage(int count) {
    String result = "";
    while (count > 0) {
      result += "item,";
    }
    return result;
  }
}
