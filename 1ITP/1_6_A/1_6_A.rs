use std::io;

fn main() {
    let last_index = input_number();
    let mut numbers = input_number();
    numbers.reverse();
    for (index, number) in numbers.iter().enumerate() {
        print!{"{}", number};
        if last_index[0] - 1 != index as i64 { print!(" ") }
    }
    println!("");
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
