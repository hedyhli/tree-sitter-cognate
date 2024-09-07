BEGIN {
  tmpfile = "tmp"
}

NR == 1 {
  do_file(nvim, $0);
  do_file(emacs, $0);
}

NR == 2 {
  do_file(helix, $0);
}

function do_file(io_file, replacement) {
  print io_file;
  tmpfile = "tmp";
  printf "" > tmpfile;
  should_print = 1;

  while((getline line < io_file) > 0) {
    if (line == ";;END") {
      should_print = 1;
    }
    if (should_print == 1) {
      print line >> tmpfile;
    }
    if (line == ";;BEGIN") {
      should_print = 0;
      print "replaced";
      print replacement >> tmpfile;
    }
  }
  close(io_file);
  close(tmpfile);

  printf "" > io_file;
  while((getline line < tmpfile) > 0)
    print line >> io_file;
  close(tmpfile);
  close(io_file);
}

END {
  system("rm " tmpfile);
}
