use std::io;

fn main() {
    loop {
        let mut numbers = input_number();
        if numbers[0] == 0 && numbers[1] == 0 { break }
        numbers.sort();
        println!("{} {}", numbers[0], numbers[1]);
    }
}

#[allow(dead_code)]
fn input_number() -> Vec<i32> {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    let vec: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap_or(0))
        .collect();
    vec
}
