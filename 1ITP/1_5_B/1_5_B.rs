use std::io;

fn main() {
    loop {
        let numbers = input_number();
        let h = numbers[0] as usize;
        let w = numbers[1] as usize;
        if h == 0 && w == 0 { break }
        for index in 0..h {
            if index == 0 || index == h - 1 {
                println!("{}", "#".repeat(w));
            } else {
                println!("#{}#", ".".repeat(w - 2));
            }
        }
        println!("");
    }
}

#[allow(dead_code)]
fn input_number() -> Vec<i64> {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    let vec: Vec<i64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap_or(0))
        .collect();
    vec
}
