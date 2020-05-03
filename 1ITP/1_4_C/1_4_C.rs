use std::io::*;
use std::str::FromStr;

fn main() {
    let cin = stdin();
    let cin = cin.lock();
    let mut sc = Scanner::new(cin);

    loop {
        let a: i32 = sc.read();
        let op: String = sc.read();
        let op = op.as_bytes()[0] as char;
        let b: i32 = sc.read();
    
        match op {
            '+' => println!("{}", a + b),
            '-' => println!("{}", a - b),
            '*' => println!("{}", a * b),
            '/' => println!("{}", a / b),
            _ => break,
        }
    }
}

struct Scanner<R: Read> {
    reader: R,
}

#[allow(dead_code)]
impl<R: Read> Scanner<R> {
    fn new(reader: R) -> Scanner<R> {
        Scanner { reader: reader }
    }

    fn safe_read<T: FromStr>(&mut self) -> Option<T> {
        let token = self.reader.by_ref().bytes().map(|c| c.unwrap() as char)
            .skip_while(|c| c.is_whitespace())
            .take_while(|c| !c.is_whitespace())
            .collect::<String>();
        if token.is_empty() {
            None
        } else {
            token.parse::<T>().ok()
        }
    }

    fn read<T: FromStr>(&mut self) -> T {
        if let Some(s) = self.safe_read() {
            s
        } else {
            writeln!(stderr(), "Terminated with EOF").unwrap();
            std::process::exit(0);
        }
    }
}

#[allow(dead_code)]
fn input() -> (i32, char, i32) {
    let mut s = String::new();
    io::stdin().read_line(&mut s).expect("");
    let mut iter = s.trim().split_whitespace();

    let a:i32 = iter.next().unwrap().parse().unwrap();
    let op:char = iter.next().unwrap().chars().nth(0).unwrap();
    let b:i32 = iter.next().unwrap().parse().unwrap();

    (a, op, b)
}
